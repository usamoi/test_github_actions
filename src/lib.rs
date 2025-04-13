unsafe extern "C" {
    unsafe static UNDEFINED: usize;
}

#[unsafe(no_mangle)]
pub fn used() {
    println!("UNDEFINED = {}", unsafe { UNDEFINED });
}

pub fn marker() -> usize {
    0
}

#[test]
fn test_marker() {
    assert_eq!(marker(), 0_usize);
}
