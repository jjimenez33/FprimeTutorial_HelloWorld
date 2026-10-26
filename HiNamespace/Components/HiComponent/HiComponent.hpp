// ======================================================================
// \title  HiComponent.hpp
// \author justi
// \brief  hpp file for HiComponent component implementation class
// ======================================================================

#ifndef HiNameSpace_HiComponent_HPP
#define HiNameSpace_HiComponent_HPP

#include "HiNamespace/Components/HiComponent/HiComponentComponentAc.hpp"

namespace HiNameSpace {

class HiComponent final : public HiComponentComponentBase {
  public:
    // ----------------------------------------------------------------------
    // Component construction and destruction
    // ----------------------------------------------------------------------

    //! Construct HiComponent object
    HiComponent(const char* const compName  //!< The component name
    );

    //! Destroy HiComponent object
    ~HiComponent();

  private:
    // ----------------------------------------------------------------------
    // Handler implementations for commands
    // ----------------------------------------------------------------------

    //! Handler implementation for command SAY_HI
    //!
    //! TODO
    //! Command to issue greeting with maximum length of 20 characters
    U32 m_greetingCount = 0;
    void SAY_HI_cmdHandler(FwOpcodeType opCode,              //!< The opcode
                           U32 cmdSeq,                       //!< The command sequence number
                           const Fw::CmdStringArg& greeting  //!< Greeting to repeat in the SayHiEvent event
                           ) override;
};

}  // namespace HiNameSpace

#endif
