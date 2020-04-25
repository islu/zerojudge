func hasAlternatingBits(n int) bool {
  binary := strconv.FormatInt(int64(n), 2)
  var prev rune
    for i, c := range binary {
      if i == 0 {
        prev = c
        continue
      }
      if prev == c {
        return false
      }
      prev = c
    }
  return true
}
