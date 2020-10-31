function anagrams(word, words) {
  let anagrams = [];
  const sortedWord = word.split("").sort().join(""); 
  for (const w of words) {
    if (
      w.length === word.length && // if the length is not same, then there is no need to check for sorted condition
      w.split("").sort().join("") === sortedWord
    ) {
      anagrams.push(w);
    }
  }
  return anagrams;
}
