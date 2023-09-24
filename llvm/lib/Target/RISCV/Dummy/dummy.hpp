
// SPDX-License-Identifier: MIT

#pragma once

#include "llvm/CodeGen/MachineFunctionPass.h"

namespace riscv {

class Dummy : public llvm::MachineFunctionPass {
 public:
  static inline char kMfpId{0};

  Dummy();
  Dummy(const Dummy&) = delete;
  Dummy(Dummy&&) = delete;
  auto operator=(const Dummy&) -> Dummy& = delete;
  auto operator=(Dummy&&) -> Dummy& = delete;

  ~Dummy() override = default;

  [[nodiscard]] auto runOnMachineFunction(llvm::MachineFunction& MFunc)
      -> bool override;
  [[nodiscard]] auto getPassName() const -> llvm::StringRef override;
};

}  // namespace riscv
