use std::io::{self, BufRead};

fn main() {
    let stdin = io::stdin();
    let mut lines = stdin.lock().lines();
    
    let a: i32 = lines.next().unwrap().unwrap().trim().parse().unwrap();
    let b: i32 = lines.next().unwrap().unwrap().trim().parse().unwrap();
    
    println!("{}", b*(a-1));
}