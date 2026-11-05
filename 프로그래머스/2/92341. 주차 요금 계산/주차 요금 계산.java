import java.util.*;

class Solution {
    public int[] solution(int[] fees, String[] records) {

        HashMap<String, Integer> time = new HashMap<>();
        HashMap<String, Integer> sumt = new HashMap<>();
        HashSet<String> hashset = new HashSet<>();

        for (String record : records) {

            String[] arr = record.split(" ");

            String[] ts = arr[0].split(":");

            int current = Integer.parseInt(ts[0]) * 60
                        + Integer.parseInt(ts[1]);

            String car = arr[1];

            hashset.add(car);

            if (arr[2].equals("IN")) {

                time.put(car, current);

            } else {

                sumt.put(car,
                    sumt.getOrDefault(car, 0)
                    + current - time.get(car));

                time.remove(car);
            }
        }

        int last = 23 * 60 + 59;

        for (String car : time.keySet()) {

            sumt.put(car,
                sumt.getOrDefault(car, 0)
                + last - time.get(car));
        }

        ArrayList<String> list = new ArrayList<>(hashset);

        list.sort((a, b) -> Integer.compare(
            Integer.parseInt(a),
            Integer.parseInt(b)
        ));

        int[] answer = new int[list.size()];

        for (int i = 0; i < list.size(); i++) {

            int total = sumt.getOrDefault(list.get(i), 0);

            if (total <= fees[0]) {

                answer[i] = fees[1];

            } else {

                int extra = total - fees[0];

                int unit = (extra + fees[2] - 1) / fees[2];

                answer[i] = fees[1] + unit * fees[3];
            }
        }

        return answer;
    }
}