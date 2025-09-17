use std::io::{self, Read};

fn main() {
    const MAX_TIME: i32 = 240;

    // Getting input
    let mut input = String::new();
    io::stdin().read_to_string(&mut input).unwrap();
    let mut iter = input.split_whitespace();

    // Parsing
    let n: i32 = iter.next().unwrap().parse().unwrap();
    let k: i32 = iter.next().unwrap().parse().unwrap();

    let time_remaining: i32 = MAX_TIME - k;

    let mut solved: i32 = 0;
    let mut time_taken: i32 = 0;

    for i in 1..(n + 1) {
        time_taken += 5 * i;
        if time_taken > time_remaining {
            break;
        } else {
            solved += 1;
        }
    }

    println!("{}", solved);
}
