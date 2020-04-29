func balancedStringSplit(s string) int {
    result := 0
    counter := 0
    for i:=0; i<len(s); i++ {
      if s[i] == 'L' {
        counter++
      }
      if s[i] == 'R' {
        counter--
      }
      if counter == 0 {
        result++
      }
    }
    return result
}
