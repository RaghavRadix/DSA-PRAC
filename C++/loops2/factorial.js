const n = parseInt(process.argv[2]);

let product = 1;

for (let i = 1; i <= n; i++) {
  product *= i;
}

console.log(product);