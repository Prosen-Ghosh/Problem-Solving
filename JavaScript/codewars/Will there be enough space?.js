function enough(cap, on, wait) {
  const res = cap - (on + wait);
  return res >= 0 ? 0 : res * -1;
}
