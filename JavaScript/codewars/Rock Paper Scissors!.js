const rps = (p1, p2) => {
  if (p1 === p2) return "Draw!";
  const rule = {
    rock: "scissors",
    scissors: "paper",
    paper: "rock",
  };

  return rule[p1] === p2 ? "Player 1 won!" : "Player 2 won!";
};
