function remainder(a, b) {
  return a > b ? (b != 0 ? a % b : NaN) : a != 0 ? b % a : NaN;
}
