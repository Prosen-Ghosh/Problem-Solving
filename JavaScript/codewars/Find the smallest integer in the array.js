class SmallestIntegerFinder {
  findSmallestInt(args) {
    const len = Math.ceil(args.length / 2);
    let min = Number.MAX_SAFE_INTEGER;
    for (let i = 0; i <= len; i++) {
      min = Math.min(min, args[i], args[args.length - i - 1]);
    }
    return min;
  }
}
