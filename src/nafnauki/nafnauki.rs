use std::io;

fn main(){
    let mut input = String::new();
    io::stdin().read_line(&mut input).unwrap();
    let after_last_dot = input.trim().rfind('.').unwrap();
    println!(".{}", &input[after_last_dot+1..]);
}