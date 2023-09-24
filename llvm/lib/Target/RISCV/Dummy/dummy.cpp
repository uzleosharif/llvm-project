
// SPDX-License-Identifier: MIT

#include "dummy.hpp"

#include <print>

namespace riscv {

Dummy::Dummy() : llvm::MachineFunctionPass{kMfpId} {}

auto Dummy::getPassName() const -> llvm::StringRef {
  return "Dummy Pass";
}

auto Dummy::runOnMachineFunction(llvm::MachineFunction& MFunc) -> bool {
  std::println("Running Dummy Pass on MF");

  return true;
}

}  // namespace riscv

namespace llvm {

auto createRISCVDummyPass() -> FunctionPass* {
  return new riscv::Dummy();
}

}  // namespace llvm
