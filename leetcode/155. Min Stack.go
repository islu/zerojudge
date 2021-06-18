package leetcode

type MinStack struct {
	arr []int
	min int
}

/** initialize your data structure here. */
func Constructor() MinStack {
	return &MinStack{
		arr: make([]int, 0),
		min: -2147483648,
	}
}

func (s *MinStack) Push(x int) {
	s.arr = append(s.arr, x)
}

func (s *MinStack) Pop() {
	n := len(s.arr)
	if n != 0 {
		s.arr = s.arr[:n-1]
	}
}

func (s *MinStack) Top() int {
	
}

func (s *MinStack) GetMin() int {

}

/**
 * Your MinStack object will be instantiated and called as such:
 * obj := Constructor();
 * obj.Push(x);
 * obj.Pop();
 * param_3 := obj.Top();
 * param_4 := obj.GetMin();
 */
