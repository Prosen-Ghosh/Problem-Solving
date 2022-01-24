function getRealFloor(n) {
  if (n <= 0) return n;
  if (n >= 13) return n - 2;
  return --n;
}
