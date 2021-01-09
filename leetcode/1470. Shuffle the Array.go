func shuffle(nums []int, n int) []int {
	slice := []int{}
for i := 0; i < len(nums)/2; i++ {
	slice = append(slice, nums[i], nums[i+n])
}
return slice
}
