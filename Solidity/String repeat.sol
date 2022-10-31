// SPDX-License-Identifier: MIT
pragma solidity ^0.8.17;

contract Repeater {
  function multiply(uint8 repeat, string memory pattern) public pure returns (string memory) {
    bytes memory str = bytes(pattern);
    uint size = repeat * str.length;
    bytes memory result = new bytes(size);
   
    for (uint i = 0; i < size; i++) {
      result[i] = str[i % str.length];
    }
    return string(result);
  }
}