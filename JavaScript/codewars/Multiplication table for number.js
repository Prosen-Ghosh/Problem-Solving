function multiTable(number) {
  return Array(10)
    .fill(+number)
    .map((n, i) => `${i + 1} * ${n} = ${n * (i + 1)}`)
    .join("\n");
}
