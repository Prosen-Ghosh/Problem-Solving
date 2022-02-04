function generateRange(min, max, step) {
  const res = [];
  for (let i = min; i <= max; i += step) res.push(i);
  return res;
}
