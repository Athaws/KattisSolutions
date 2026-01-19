use std::io::{self, Read};

fn main() {
    let mut input = String::new();
    io::stdin().read_to_string(&mut input).unwrap();
    
    let nums: Vec<i32> = input.split_whitespace()
        .filter_map(|s| s.parse().ok())
        .collect();

    let (h, w, l, c) = (nums[0], nums[1], nums[2], nums[3]);

    println!("{}", 
        if h * w * l == c {"COZY"} 
        else if h * w * l > c {"SO MUCH SPACE"} 
        else {"TOO TIGHT"}
    );
}