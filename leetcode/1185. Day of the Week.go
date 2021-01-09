import "time"

func dayOfTheWeek(day int, month int, year int) string {
	date := time.Date(year, time.Month(month), day, 12, 0, 0, 0, time.UTC)
	return date.Weekday().String()
}
