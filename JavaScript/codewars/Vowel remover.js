function shortcut(s) {
  return s
    .split("")
    .filter((v) => !["a", "e", "i", "o", "u"].includes(v))
    .join("");
}

// function shortcut(string){
//     return string.replace(/[aeiou]/g,'')
// }