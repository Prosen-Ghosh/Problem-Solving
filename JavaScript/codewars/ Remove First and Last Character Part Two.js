function array(arr) {
  const a = arr.split(",");
  const res = a.slice(1, a.length - 1).join(" ");
  return res.length < 1 ? null : res;
}
