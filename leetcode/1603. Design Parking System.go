type ParkingSystem struct {
	slot [3]int
}


func Constructor(big int, medium int, small int) ParkingSystem {
	p := ParkingSystem{}
	p.slot[0] = big
	p.slot[1] = medium
	p.slot[2] = small
	return p
}


func (this *ParkingSystem) AddCar(carType int) bool {
	this.slot[carType-1] -= 1
    return this.slot[carType-1] >= 0
}	


/**
 * Your ParkingSystem object will be instantiated and called as such:
 * obj := Constructor(big, medium, small);
 * param_1 := obj.AddCar(carType);
 */
