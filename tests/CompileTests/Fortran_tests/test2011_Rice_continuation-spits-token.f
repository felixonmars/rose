! Rice test
! OFP does not handle fixed-format continuation lines correctly.
! If a single token is split across two lines, which is legal,
! OFP treats the two halves as separate tokens.

      program continuation_splits_token
      integer hello
     1world
      helloworld = 0
      end program
