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
}
