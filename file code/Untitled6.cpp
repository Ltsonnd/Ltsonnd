private static int[] number = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

 public static boolean checkNumber(String s) {
        boolean check = false;
        char[] a = s.toCharArray();
        for (int i = 0; i < a.length; i++) {
            System.out.println(a[i]);
            for (int j = 0; j < number.length; j++) {
                if (a[i] != number[j]) {
                    check = true;
                }
            }
        }
        return check;
    }
    public static void main(String[] args) {
        boolean check = checkNumber("123");
        System.out.println(check);
    }
