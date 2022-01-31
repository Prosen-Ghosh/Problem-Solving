function doubleChar(str) {
  return str
    .split("")
    .map((v) => v + v)
    .join("");
}
