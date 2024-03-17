function Main(input) {
  input = input.split("\n");
  let H = parseInt(input[0].split(" ")[0]);
  let W = parseInt(input[0].split(" ")[1]);
  let map = [];
  let sum = new Array(H + W);
  for (let i = 0; i < H; i++) {
    sum[i] = 0;
    map[i] = input[i + 1].split(" ").map(Number);
    for (let j = 0; j < W; j++) {
      sum[i] += map[i][j];
    }
  }

  for (let k = 0; k < W; k++) {
    sum[H + k] = 0;
    for (let l = 0; l < H; l++) {
      sum[H + k] += map[l][k];
    }
  }

  for (let i = 0; i < H; i++) {
    for (let j = 0; j < W; j++) {
      map[i][j] = -map[i][j] + sum[i] + sum[j + H];
    }
  }

  for (let i = 0; i < H; i++) {
    map[i] = map[i].join(" ");
  }

  console.log(map.join("\n"));
}
Main(require("fs").readFileSync("/dev/stdin", "utf8"));
