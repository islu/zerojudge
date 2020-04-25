/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */
func getDecimalValue(head *ListNode) int {
  num := head.Val
  head = head.Next
  for head != nil {
    num = num << 1 + head.Val
    head = head.Next
  }
  return num
}
