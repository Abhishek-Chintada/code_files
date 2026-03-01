// arrays and slices and maps

package main
import "fmt"
func main() {
	var intarr [3]int32
	intarr[2] = 12
	fmt.Println(intarr[0])
	fmt.Println(intarr[1:3])
	fmt.Println("These are the memory locations of the elements of the array:")
	fmt.Println(&intarr[0])
	fmt.Println(&intarr[1])
	fmt.Println(&intarr[2])
	var intarr1 = [3]int32{1, 2, 3}
	fmt.Println(intarr1)
	var slicearr []int32 = []int32{1, 2, 3}
	fmt.Println(slicearr)
	fmt.Printf("The length of the slice initially is %v and the capacity of the slice initially is %v\n", len(slicearr), cap(slicearr))
	slicearr = append(slicearr, 4)
	fmt.Println(slicearr)
	fmt.Printf("The length of the slice after appending is %v and the capacity of the slice afte appending is %v\n", len(slicearr), cap(slicearr))
	var intslice []int32 = []int32{5, 6, 7}
	var intslice2 []int32 = append(slicearr, intslice...)
	fmt.Println(intslice2)
	fmt.Printf("The length of the newly combined slice is %v and the capacity of the newly created slice is %v\n", len(intslice2), cap(intslice2))
	var intslice3 []int32 = make([]int32, 3, 5)
	intslice3[0] = 10
	intslice3[1] = 12
	intslice3[2] = 45
	fmt.Println(intslice3)
	fmt.Printf("The length of the maked slice is %v and the capacity of the maked slice is %v\n", len(intslice3), cap(intslice3))
	var mymap map[string]int32 = make(map[string]int32)
	mymap["lavada"] = 69
	mymap["bhosdha"] = 96
	fmt.Printf("map made with the make command : %v\n",mymap)
	var mymap1 map[string]int32 = map[string]int32{"Lavada" : 69, "Bhosdha": 96}
	fmt.Printf("map made with the direct initialization : %v\n",mymap1)
	var age, ok = mymap["kojja"] // the ok variable is used to check whether the key is present in the map or not.
	if ok {
		fmt.Printf("The age of lavada is %v\n", age)
	} else {
		fmt.Println("Invalid name ra lanje...")
	}
	delete(mymap, "kojja") // used to remove a key from the map, can be used if the key is not present also.
	for name, age := range mymap {
		fmt.Printf("Name: %v ;\n Age : %v\n", name, age)
	}
	for i, v := range intarr {
		fmt.Printf("The square of the value at index %v is %v\n", i, v*v)
	}
	// no while loop in go should use the for loop with appropriate conditions.
	// can also mimick the while loop by using an if conditional inside the for loop by dropping the condition part of the for loop.
	for i:=0; i<10; i++ {
		fmt.Print(i+1)
	}
	fmt.Println()
	
}
