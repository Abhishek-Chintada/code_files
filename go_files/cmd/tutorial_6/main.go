package main

import (
	"fmt"
)
type owner struct {
	name string
}
type gasengine struct {
	mpg uint
	gallons uint
	ownerinfo owner
	owner
}

type electriccar struct {
	mpkwh uint
	kwh uint
}

type gasengine1 struct {
	mpg uint
	gallons uint
	owner
}

func (e gasengine) milesleft() uint {
	return e.gallons*e.mpg
}

func (e electriccar) milesleft() uint {
	return e.mpkwh*e.kwh
}

type engine interface {   // these interfaces are used to define the similar behaviour of various functions ka methods.
	milesleft() uint
}

func canmakeit(e engine, miles uint) {
	if miles > e.milesleft() {
		fmt.Println("Need to fuel up first kiddo!")
	} else {
		fmt.Println("You will be able to make it!")
	}
}

func main() {
	var myengine gasengine = gasengine{mpg: 25, gallons: 15, ownerinfo: owner{name: "Alex"}}
	myengine.mpg = 30
	fmt.Println(myengine)
	fmt.Println(myengine.mpg, myengine.gallons, myengine.ownerinfo.name)
	var myengine1 gasengine1 = gasengine1{25, 10, owner{name: "John"}}
	fmt.Println(myengine1.mpg, myengine1.gallons, myengine1.name)  // try to spot the differences and digest the facts.
	var anonymous_engine = struct { // this is an anonymous struct and this definition cannot be used for any other variable.
		mpg uint
		gallons uint
	}{25, 15}
	fmt.Printf("This is the anonymous struct created : %v\n", anonymous_engine)
	// introduction to the function methods.
	fmt.Printf("The number of miles left in the gas engine is %v\n", myengine.milesleft())
	canmakeit(myengine, 100)
	var electric = electriccar{mpkwh: 100, kwh: 10}
	fmt.Printf("The number of miles left in the electric car is %v\n", electric.milesleft())
	canmakeit(electric, 2000)
}