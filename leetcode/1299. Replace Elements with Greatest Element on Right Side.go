func replaceElements(arr []int) []int {
  max := arr[len(arr)-1]
  arr[len(arr)-1] = -1
  for i:=len(arr)-2; i>=0; i-- {
    if arr[i] <= max {
      arr[i] = max
    } else {
      arr[i], max = max, arr[i]
    }
  }
  return arr
}
