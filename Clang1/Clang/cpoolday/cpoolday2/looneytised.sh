#!/bin/bash
cat passwd
grep -e "theo1" | grep -e "steven1" | grep -e "arnaud1" | grep -e "pierre-jean" | sed -e 's/theo1/Wile E. Coyote/' | sed -e 's/steven1/Daffy Duck/' | sed -e 's/arnaud1/Porky Pig/' | sed -e 's/pierre-jean/Marvin the Martian/'
