fn main() {
    let x: i8 = 10;
    println!("{}", x);

    let y: u8 = 10;
    println!("{}", y);

    let decimal = 02_55;
    println!("{}", decimal);

    let hex = 0xff;
    println!("{}", hex);

    let octal = 0o377;
    println!("{}", octal);

    let binary = 0b1111_1111;
    println!("{}", binary);

    let byte = b'A';
    println!("{}", byte);

    let _x = 2.0; // f64 is default.
    let _y: f32 = 1.0;

    let _t = true;
    let _f: bool = false;

    let c = 'c';
    println!("{}", c);

    // Compound Types
    // Arrays -> each element can have various types.
    let tup = (500, "hi", true);
    println!("{}", tup.0);
    let (x, y, z) = tup;
    println!("{}", x);
    println!("{}", y);
    println!("{}", z);

    // Array Shit -> all elements should have same type.
    let array = [1, 3, 2];
    println!("{}", array[0]);
    let mut array0: [i32; 3] = [4, 5, 6];
    array0[2] = 10;
    println!("{}", array0[2]);

    // Vectors -> these are dynamic i.e they are resizable , it also acts like a bloody stack.
    let mut nums = vec![1, 2, 3];
    nums.push(4);
    println!("{:?}", nums);
    nums.pop(); // takes out the last value of the vector.
    println!("{:?}", nums);

    let mut vec = Vec::new(); // vec! macro uses this.
    vec.push("String");
    vec.push("Test");
    println!("{:?}", vec);
    vec.reverse();   // xtremely cool shit.
    println!("{:?}", vec);

    let vect = Vec::<i32>::with_capacity(2);
    println!("{}", vect.capacity());

    let v: Vec<i32> = (0..5).collect();
    println!("{:?}", v);

    // slices shit -> slices cannot be stored directly into variables or cannot be passed as function arguments
    let sv: &[i32] = &v[2..4];
    println!("{:?}", sv);

    // A string will be allocated in the heap, is global and is not null terminated. It is UTF-8 encoded global string
    let name = String::from("Taylor");
    let course = "Rust".to_string();
    let new_name = name.replace("Taylor", "Ty");
    println!("{}", name);
    println!("{}", course);
    println!("{}", new_name);

    // &str = "string slice" or "stir" ; string and string slice are very different!
    let str1 = "hello";
    let str0 = str1.to_string();
    let str2 = &str0;
    println!("{}", str1);
    println!("{}", str0);
    println!("{}", str2);
    // A string slice does not allocate memory on the heap whereas a string does.
    // can compare strings with == and !=
    println!("{}", "ONE".to_lowercase() == "one"); // check!

}
