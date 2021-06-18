func isValid(s string) bool {
	// "()[]{}" <-> 40 41 91 93 123 125
	stack := make([]int, len(s))
	index := -1

	for _, v := range s {
		if index == -1 {
			index++
			stack[index] = int(v)
			continue
		}
		switch int(v) {
		case 40, 91, 123:
			index++
			stack[index] = int(v)
		case 41, 93, 125:
			if stack[index] == int(v)-1 || stack[index] == int(v)-2 {
				index--
			} else {
				return false
			}
		}
	}

	if index == -1 {
		return true
	} else {
		return false
	}
}

/* sample submission

func isValid(s string) bool {
	stack := new(stack)
	for _, r := range s {
		switch r {
		case '(', '{', '[':
			stack.Push(r)
		case ')', '}', ']':
			if stack.IsEmpty() {
				return false
			}
			open := stack.Pop()
			if !equalType(open, r) {
				return false
			}
		}
	}
	if stack.IsEmpty() {
		return true
	}

	return false
}

func equalType(x, y rune) bool {
	if x == '(' && y == ')' {
		return true
	}
	if x == '{' && y == '}' {
		return true
	}
	if x == '[' && y == ']' {
		return true
	}

	return false
}

type stack struct {
	arr []rune
}

type Stack interface {
	Push(x rune)
	Pop() rune
	Top() rune
	IsEmpty() bool
}

var _ Stack = new(stack)

func New() Stack {
	return &stack{
		arr: make([]rune, 0),
	}
}

func (s *stack) Push(x rune) {
	s.arr = append(s.arr, x)
}

func (s *stack) Pop() rune {
	x := s.arr[len(s.arr)-1]
	s.arr = s.arr[:len(s.arr)-1]

	return x
}

func (s *stack) Top() rune {
	return s.arr[len(s.arr)-1]
}

func (s *stack) IsEmpty() bool {
	return len(s.arr) == 0
}

*/
