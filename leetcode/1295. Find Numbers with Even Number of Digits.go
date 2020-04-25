func findNumbers(nums []int) int {
  numberOfDigitsWithEven := 0
  for _, n := range(nums) {
    // floor(log10(i))+1 -> calculate digits
    // &1 -> equals to %2
    // numberOfDigitsWithEven+=( (int)floor(log10(i))+1 & 1) == 0;
    t := int(math.Log10(float64(n))) + 1
    if t & 1 == 0 {
      numberOfDigitsWithEven += 1
    }
  }
  return numberOfDigitsWithEven
}
