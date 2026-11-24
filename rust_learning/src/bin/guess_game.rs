use std::io;
use std::cmp::Ordering;
use rand::Rng;


fn main() {
    let secretnumber = rand::thread_rng().gen_range(1..=100);
    println!("Please input a number...");
    let mut guess = String::new();
    io::stdin()
        .read_line(&mut guess)
        .expect("failed to read line"); // this is a bad practice in general as it causes the
                                        // program to crash, instead we should handle the error.
    println!("You guesssed : {guess}");

    match guess.cmp(&secretnumber) {
        Ordering::Less => println!("Too small!"),
        Ordering::Equal => println!("You are right !!!"),
        Ordering::Greater => println!("Too large!"),
    }
}
