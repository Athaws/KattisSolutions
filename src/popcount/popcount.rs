use std::io;

fn main(){
    let mut inp = String::new();
    io::stdin().read_line(&mut inp).unwrap();
    println!("{}", inp.chars().filter(|c| *c == '1').count())
}