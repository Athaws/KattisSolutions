use std::io::{self, Read};

fn main() {
    let mut input = String::new();
    io::stdin().read_to_string(&mut input).unwrap();
    
    let mut nums = input.split_whitespace().map(|s| s.parse::<i32>());
    let mut total = 0;
    
    while let Some(Ok(n)) = nums.next() {
        for _ in 0..n {
            if let Some(Ok(num)) = nums.next() {
                total += num;
            }
        }
    }
    
    println!("{}", total);
}