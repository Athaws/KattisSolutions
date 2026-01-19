use std::io::{self, Read};
use std::collections::HashMap;

fn main()
{
    let keymap: HashMap<char, char> = "abcdefghijklmnopqrstuvwxyz "
        .chars()
        .zip("qwertyuiopasdfghjklzxcvbnm ".chars())
        .collect();

    let mut input = String::new();
    io::stdin().read_to_string(&mut input).unwrap();
    let string = input.lines().nth(1).unwrap();

    let converted: String = string
        .trim()
        .chars()
        .map(|c| {
            *keymap.get(&c).unwrap_or(&c)
        })
        .collect();

    println!("{}", converted);
}