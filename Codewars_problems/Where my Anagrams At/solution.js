function anagrams(word, words) {
  let ans = [];
  let sortedWord = word.split("").sort().join("");
  for (const w of words) {
    if (
      w.length === word.length &&
      w.split("").sort().join("") === sortedWord
    ) {
      ans.push(w);
    }
  }
  return ans;
}
