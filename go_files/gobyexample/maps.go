package main

import (
	"fmt"
	"maps"
)

func main() {
	m := make(map[string]int)
	m["k1"] = 12
	m["k2"] = 24
	m["k3"] = 36
	fmt.Println("map 1 : ", m)
	v1 := m["k1"]
	m1 := map[string]int {"k1" : 12, "k2" : 24, "k3" : 36}
	fmt.Println("map 2 : ", m1)
	fmt.Println(v1)
	if maps.Equal(m , m1) {
		fmt.Println("Maps are equal.")
	} else {
		fmt.Println("Maps are not equal.")
	}
}