//---------------------------------------------------------------------------------------------------
// COPYRIGHT (C) 2017 SYNOPSYS INC.
// This software and the associated documentation are confidential and
// proprietary to Synopsys, Inc. Your use or disclosure of this software
// is subject to the terms and conditions of a written license agreement
// between you, or your company, and Synopsys, Inc. In the event of
// publications, the following notice is applicable:
//
// ALL RIGHTS RESERVED
//
// The entire notice above must be reproduced on all authorized copies.
//----------------------------------------------------------------------------------------------------
//==================================================================================================//
//-------------------------------------Description--------------------------------------------------//
//==================================================================================================//

//==================================================================================================//

`ifndef GUARD_SVT_DFI_LPDDR4_ACT_SEQ_SV
`define GUARD_SVT_DFI_LPDDR4_ACT_SEQ_SV

class svt_dfi_lpddr4_act_seq  extends uvm_sequence#(svt_dfi_mc_lpddr4_transaction);
 
  `uvm_object_utils(svt_dfi_lpddr4_act_seq )
  `uvm_declare_p_sequencer(svt_dfi_virtual_sequencer)

  svt_dfi_drive_sequence        drive_seq;
  svt_dfi_mc_configuration      dfi_config;
  svt_configuration             get_cfg;
  rand bit [`DFI_MAX_ADDRESS_WIDTH-1:0] addr;
  rand bit [`DFI_MAX_BANK_ADDRESS_WIDTH-1:0] bank;
  rand bit [`SVT_DFI_CHIP_SELECT_WIDTH-1:0] cs;

  function new(string name = "svt_dfi_lpddr4_act_seq ");
    super.new(name);
  endfunction: new   

  virtual task pre_body();
    uvm_phase phase;
    super.pre_body();
    `svt_trace("svt_dfi_lpddr4_act_seq ","Starting of the sequence : svt_dfi_act_wrapper_seq_1");
    `ifdef SVT_UVM_12_OR_HIGHER
       phase = get_starting_phase();
    `else
       phase = starting_phase;
    `endif
    if (phase!=null) begin
      phase.raise_objection(this);
      `svt_debug("svt_dfi_lpddr4_act_seq ","Raised all objections");
    end
  endtask: pre_body

  virtual task post_body();
    uvm_phase phase;
    super.post_body();
    `svt_trace("svt_dfi_lpddr4_act_seq ","Starting of the sequence : svt_dfi_act_wrapper_seq_2");
    `ifdef SVT_UVM_12_OR_HIGHER
       phase = get_starting_phase();
    `else
       phase = starting_phase;
    `endif
    if (phase!=null) begin
      phase.drop_objection(this);
      `svt_debug("svt_dfi_lpddr4_act_seq ","Dropped all objections");
    end
  endtask: post_body

  virtual task body();
    `svt_trace("svt_dfi_lpddr4_act_seq ","Starting of the sequence : svt_dfi_lpddr4_act_seq ");
    p_sequencer.get_host_cfg(get_cfg);
    if (!$cast(dfi_config, get_cfg)) begin
      `svt_fatal("svt_dfi_lpddr4_act_seq ", "Unable to $cast the configuration to a svt_host_agent_configuration class");
    end
     `uvm_create_on(drive_seq,p_sequencer.host_transaction_seqr);
    
    drive_seq.COMMAND =svt_dfi_drive_sequence::ACT_ONE;
    drive_seq.ADDR = addr;
    drive_seq.CS =cs;
    drive_seq.BANK =bank;
    `uvm_send (drive_seq);
    drive_seq.COMMAND =svt_dfi_drive_sequence::ACT_ONE;
    drive_seq.CS = {`SVT_DFI_CHIP_SELECT_WIDTH{1'b0}};
    `uvm_send (drive_seq);
    drive_seq.COMMAND =svt_dfi_drive_sequence::ACT_TWO;
    addr[18:17] = 2'b11;  //To drive activate command dfi_vip is expecting row_address[18:17] = 2'b11
    drive_seq.ADDR = addr;
    drive_seq.CS =cs;
    drive_seq.BANK =bank;
    `uvm_send (drive_seq);
    drive_seq.COMMAND =svt_dfi_drive_sequence::ACT_TWO;
    drive_seq.CS = {`SVT_DFI_CHIP_SELECT_WIDTH{1'b0}};
    `uvm_send (drive_seq);

    
    `svt_trace("svt_dfi_lpddr4_act_seq ","Ending of the sequence : svt_dfi_lpddr4_act_seq ");
   endtask
    
endclass: svt_dfi_lpddr4_act_seq 
`endif
//-----------END OF LINE -------------------------------------------//









