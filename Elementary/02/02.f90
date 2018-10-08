program two
  use iso_fortran_env, only : IOSTAT_EOR
  implicit none

  integer :: io_number
  character(len = 1) :: buffer
  character(len=:), allocatable :: name

  name=""
  write(*,*) "What is your name?"
  do
     read(unit = *, fmt = '(a)', advance = "no", iostat = io_number) buffer
     select case (io_number)
     case(0)                       
        name = name // buffer     
     case(IOSTAT_EOR)
        exit
     end select
  end do
  print*,name, len(name)


end program two

