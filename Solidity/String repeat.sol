pragma solidity ^0.4.19;

contract Repeater {
  function multiply(uint8 repeat, string pattern) pure returns (string) {
    bytes memory str = bytes(pattern);
    uint size = repeat * str.length;
    bytes memory result = new bytes(size);
   
    for (uint i = 0; i < size; i++) {
      result[i] = str[i % str.length];
    }
    return string(result);
  }
}