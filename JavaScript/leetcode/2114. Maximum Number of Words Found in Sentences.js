/**
 * @param {string[]} sentences
 * @return {number}
 */
 var mostWordsFound = function(sentences) {
    let len = sentences.length;
    let max = 0;
    for(let i = 0; i < len; i++){
        let words = sentences[i].split(' ').length;
        max = Math.max(words, max);
    }
    return max;
};