function billboard(name, price = 30) {
  return Array(name.length)
    .fill(price)
    .reduce((c, p) => c + p, 0);
}
