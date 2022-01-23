function uniTotal(string) {
    return string.split('').reduce((a, b) => a + (b.charCodeAt(0)), 0);
}
