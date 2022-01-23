function well(x) {
  const len = x.length;
  let counter = 0;
  for (let i = 0; i < len; i++) {
    console.log(x[i]);
    if (x[i] === "good") counter++;
    if (counter > 2) return "I smell a series!";
  }
  if (counter >= 1) return "Publish!";
  return "Fail!";
}
