package main

import (
	"fmt"
	"slices"
)

func main() {
	var s []int = []int{1, 2, 3}
	fmt.Printf("s : %T\n", s)
	fmt.Printf("slice : %v, len : %v, cap : %v\n", s, len(s), cap(s))
	s = append(s, 4)
	fmt.Printf("slice : %v, len : %v, cap : %v\n", s, len(s), cap(s))
	c_original := make([]int, len(s))
	copy(c_original, s)
	fmt.Printf("copy : %v, len : %v, capacity : %v\n", c_original, len(c_original), cap(c_original))
	var t1 []string = []string{"a", "b", "c"}
	var t2 []string = []string{"d", "e", "f"}
	b := [...]int{1,3:500, 600}  // random shit.
	fmt.Printf("%T\n", b)
	b_slice := b[:]
	fmt.Printf("%T\n", b_slice)
	fmt.Printf("blen : %v, bcap : %v\n", len(b_slice), cap(b_slice))
	fmt.Println(b)
	b_sliced := b[2:]
	fmt.Println(b_sliced)
	fmt.Printf("bslciedlen: %v, bcapacity: %v\n", len(b_sliced), cap(b_sliced))
	b_sliced = b_sliced[:cap(b_sliced)]
	fmt.Printf("bnewlen : %v, bnewcap: %v\n", len(b_sliced), cap(b_sliced))
	if slices.Equal(t2, t1) {
		fmt.Println("t1 == t2")
	} else {
		fmt.Println("Bummer")
	}
	// slices implementation
	d := []byte{'a', 'b', 'c', 'd'};
	e := d[2:]
	fmt.Println(d, e)
	e[1] = 'x'
	fmt.Println(d, e)
	// arrays implementation
	d_a := [...]byte{'a', 'b', 'c', 'd'}
	e_a :=[...]byte{d_a[2], d_a[3]}
	fmt.Printf("%T, %T\n", d_a , e_a)
	fmt.Println(d_a, e_a)
	e_a[1] = 'x'
	fmt.Println(d_a, e_a)
}
