use std::io::{self, Read};

fn main() {
    let mut input = String::new();
    io::stdin().read_to_string(&mut input).unwrap();
    
    let nums: Vec<i32> = input.split_whitespace()
        .filter_map(|s| s.parse().ok())
        .collect();

    let (m, h, x, n, y) = (nums[0], nums[1], nums[2], nums[3], nums[4]);

    println!("{}", (h * m * y) as f64 / (n * x) as f64);
}